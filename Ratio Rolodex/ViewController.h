//
//  ViewController.h
//  Ratio Rolodex
//
//  Created by Adam Argyle on 3/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

<UIWebViewDelegate> {
    IBOutlet UIWebView *webView;
}

@property (nonatomic, retain) UIWebView * webView;

@end
