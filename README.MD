# SACE

### 简介
 &ensp; &ensp; SACE(Service And Command Ecutor)目标是在Android平台提供一个用来执行shell命令的模块，可以接收外部传递的shell命令，然后以特定的条件执行。SACE目前划分为三个功能部分：外部输入、消息传递、消息处理。外部输入主要是用来接收外部输入的shell命令，输入的方式是可以扩充的，灵活可变；消息传递则从外部拿到输入的所有消息，然后有序的放入到一个统一的消息队列中，将消息传递给下一个片段；消息处理则是从消息队列中读取当前输入的每一个消息并进行处理。

### 核心功能
- 核心的功能就是执行命令，运行手机当中native层的命令，但是支持命令的输入和输出，确保了命令功能的完整性。
- 有两种命令执行模式，normal和service模式。normal则是不加任何修饰的执行，service模式则会对命令的整个执行过程进行监控和管控。
 - 在service模式下了可以控制命令执行的启动-暂停-继续-终止，并且当命令执行过程中异常了，会直接告知客户端。
 - 客户端和服务端之间的通信方式灵活可变，支持多种，也可以自定义一种新的通信方式，在通信的时候也可以选择使用哪种方式。
 - 这个就类搭建了一个消息处理框架，利用了一个消息分发器将消息的接受和处理分开，并且自动完成将特定的消息给特定的处理着，对于消息的解析和处理都有消息处理着实现。
- 消息的处理和接收是成对出现的，也可以复用，这种架构保证了他完美的扩展性，然后给自针对各个相互独立的功能提供不同的功能接口。
- 既能支持手动执行命令，还能支持基于某一个事件去执行某一些命令，例如刚开机时，某些属性是设置，则要提供一系列的触发条件。
