//
//  HIAppRuntimeBridge.h
//  Hive
//
//  Created by Bazyli Zygan on 27.06.2013.
//  Copyright (c) 2013 Hive Developers. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

#import "HIApplicationRuntimeViewController.h"

@interface HIAppRuntimeBridge : NSObject

@property (strong) HIApplicationRuntimeViewController *controller;
@property (strong) WebFrame *frame;

- (void)killCallbacks;

- (void)send:(NSString *)hash amount:(CGFloat)amount callback:(WebScriptObject*)callback;
- (void)sendToAddress:(NSString *)hash amount:(CGFloat)amount callback:(WebScriptObject*)callback;
- (void)send:(NSString *)hash callback:(WebScriptObject*)callback;
- (void)sendToAddress:(NSString *)hash callback:(WebScriptObject*)callback;
- (void)transactionWithHash:(NSString *)hash callback:(WebScriptObject *)callback;
- (void)clientInformation:(WebScriptObject *)callback;
- (void)setCurrencyChangeCallback:(WebScriptObject *)callback;
@end
