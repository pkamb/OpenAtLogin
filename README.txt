Easily add 'Open at Login' functionality to your Mac OS X app!

Step-by-Step Guide:
1. Add OpenAtLogin.h and OpenAtLogin.m to your Xcode project.
2. In Xcode, go to your .xib file.
3. View > Utilities > Object Library. Drag an 'Object' (NSObject) over to your Objects list.
4. In the just-added Object's 'Custom Class' property field, select 'OpenAtLogin'.
5. Add a checkbox to your window that the user will check to open the app at login. Make sure its State is set to 'Off' by default (required for the Mac App Store review process).
6. On the checkbox's 'Connections Inspector' tab, drag the 'Selector' connection to your OpenAtLogin Object. Select 'toggleLoginItem'.
7. Drag the checkbox's 'New Referencing Outlet' connection to your OpenAtLogin Object. Select 'btnToggleLoginItem'.
8. That's all there is to it! Check the checkbox, log out, log back in, and watch your app open automatically.

NOTE: This method won't work for adding open-at-login functionality to a sandboxed app. Try this instead:
http://blog.timschroeder.net/2012/07/03/the-launch-at-login-sandbox-project/

Tutorial Author: Peter Kamb
Website: https://github.com/pkamb/OpenAtLogin

Forked from SGLaunchAtLogin
Author: Justin Williams
Contact: justin[at]secondgearsoftware[dot]com
Website: http://www.secondgearsoftware.com/
GitHub: https://github.com/justin/Shared-File-List-Example
