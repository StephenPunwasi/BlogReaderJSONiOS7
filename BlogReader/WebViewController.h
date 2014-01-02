//
//  WebViewController.h
//  BlogReader
//
//  Created by Stephen Punwasi on 01/01/2014.
//  Copyright (c) 2014 Stephen Punwasi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (strong, nonatomic) NSURL *blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end
