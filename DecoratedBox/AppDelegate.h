//
//  AppDelegate.h
//  DecoratedBox
//
//  Created by Fabio Rodella on 7/8/11.
//  Copyright Crocodella Software 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
