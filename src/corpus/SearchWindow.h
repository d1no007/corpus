#import <Cocoa/Cocoa.h>

@class MainView;

@interface SearchWindow : NSWindow {
	NSView *childContentView;
	NSButton *closeButton;
}

@end