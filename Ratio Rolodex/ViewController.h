//
//  ViewController.h
//  Ratio Rolodex
//
//  Created by Adam Argyle on 3/21/12.
//  Copyright (c) 2012 ArgyleInk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

<UIWebViewDelegate> {
    IBOutlet UIWebView *webView;
    IBOutlet UIActivityIndicatorView *spinner;
}

@property (nonatomic, retain) UIWebView * webView;
@property (nonatomic, retain) UIActivityIndicatorView * spinner;

@end
