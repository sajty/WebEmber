/**
 * @mainpage
 *
 * @section intro_sec Introduction
 *
 *     WebEmber is integrating Worldforge Ember into the Web Browser.<br>
 *     It uses @link http://www.firebreath.org Firebreath @endlink to integrate it in a cross-platform and cross-browser way.<br>
 *     <br>
 *     You can try it out here: (TODO: Add URL)
 *
 * @section feature_sec Features
 *     - Cross-platform
 *     - Cross-browser
 *     - Multi-threaded design
 *     - Allows to shut down plugin in background
 *     - Allows two directional communication with javascript.
 *
 * @section install_sec Installation
 *     This section will discuss how you can install the plugin, if you build it yourself.
 *     On official builds you get an installer.
 *
 *     @subsection win Windows
 *         - Make sure that you have all the resources.
 *         - Make sure that you have npWebEmber.dll and WebEmber.dll in your PREFIX/bin directory.
 *         - Start the command line and go to the PREFIX/bin folder.
 *         - Type "regsvr32 npWebember.dll"
 *
 *     @subsection linux Linux
 *         - Open up the terminal.
 *         - Go to PREFIX/bin directory.
 *         - Type "ln -s ./npWebEmber.so ~/.mozilla/plugins/npWebEmber.so"
 *
 *     @subsection osx Mac OS X
 *         TODO: Write something
 *
 * @section dev_sec How it works
 *
 *     Normally there are 3 autogenerated classes in Firebreath:
 *         - WebEmber, which is the main class. In firebreath there is no entry point or main().
 *           It will automatically call the members of this class, when an event happens.
 *         - PluginFactory, which allows to change the settings of firebreath.
 *         - WebEmberAPI, which allows to interact with javascript. At the moment, It's only a placeholder.
 *
 *     There are 3 extra classes added:
 *         - WebEmberMessageQueue, which has its own thread. It will wait for messages on queue,
 *           and then process the messages.
 *         - WebEmberRunner, which has its own thread too, This will launch ember.
 *         - WebEmberLinker, which is only required on windows builds. It will handle the run-time
 *           linking of the ember DLL.
 *
 *     Ember starts on WebEmber::onWindowAttached, and quits on WebEmber::onWindowDetached.
 *     WebEmber::onWindowAttached will create 2 threads: The MessageQueue (starts at WebEmberMessageQueue::messageQueueThread) and the Ember (starts at WebEmberRunner::emberThread)
 *     As a debug start-point you should check them.<br>
 *
 *
 */
