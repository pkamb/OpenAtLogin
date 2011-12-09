Easily add 'Open at Login' functionality to your Mac OS X app!

1. Add OpenAtLogin.h and OpenAtLogin.m to your Xcode project.
2. In Xcode, go to your .xib file.
3. View > Utilities > Object Library. Drag an 'Object' (NSObject) over to your Objects list.
4. In the just-added Object's 'Custom Class' property field, select 'OpenAtLogin'.
5. Add a checkbox to your window that the user will check to open the app at login. Make sure its State is set to 'Off' by default (required for the Mac App Store review process).
6. On the checkbox's 'Connections Inspector' tab, drag the 'Selector' connection to your OpenAtLogin Object. Select 'toggleLoginItem'.
7. Drag the 'New Referencing Outlet' connection to your OpenAtLogin Object. Select 'btnToggleLoginItem'.
8. That's all there is to it! Check the checkbox, log out, log back in, and watch your app open automatically.

Tutorial Author: Peter Kamb

Forked from SGLaunchAtLogin
Author: Justin Williams
Contact: justin[at]secondgearsoftware[dot]com
Website: http://www.secondgearsoftware.com/