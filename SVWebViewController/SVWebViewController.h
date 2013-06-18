//
//  SVWebViewController.h
//
//  Created by Sam Vermette on 08.11.10.
//  Copyright 2010 Sam Vermette. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

#import <MessageUI/MessageUI.h>

#import "SVModalWebViewController.h"

@interface SVWebViewControllerBookmark : NSObject

- (id)initWithTitle:(NSString*)title andURL:(NSString*)urlString;

@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *URLString;

@end

@interface SVWebViewController : UIViewController

- (id)initWithAddress:(NSString*)urlString;
- (id)initWithAddress:(NSString*)urlString delegate: (id<UIWebViewDelegate>) delegate;
- (id)initWithURL:(NSURL*)URL;

@property (nonatomic, readwrite) SVWebViewControllerAvailableActions availableActions;
@property (nonatomic, strong, readwrite) NSArray *bookmarks; // array of SVWebViewControllerBookmark objects

@end
