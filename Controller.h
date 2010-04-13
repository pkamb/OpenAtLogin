//
//  Controller.h
//  SGLaunchAtLogin
//
//  Created by Justin Williams on 3/1/08.
//  Copyright 2008 Second Gear LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface Controller : NSObject {
	IBOutlet NSButton *btnToggleLoginItem;
}

- (IBAction)toggleLoginItem:(id)sender;
@end

@interface Controller (PrivateMethods)
- (void)enableLoginItemWithLoginItemsReference:(LSSharedFileListRef )theLoginItemsRefs ForPath:(NSString *)appPath;
- (void)disableLoginItemWithLoginItemsReference:(LSSharedFileListRef )theLoginItemsRefs ForPath:(NSString *)appPath;
- (BOOL)loginItemExistsWithLoginItemReference:(LSSharedFileListRef)theLoginItemsRefs ForPath:(NSString *)appPath;
@end