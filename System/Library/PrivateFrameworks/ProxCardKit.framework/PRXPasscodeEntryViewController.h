/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProxCardKit/PRXCardContentViewController.h>

@class PRXPasscodeEntryView;

@interface PRXPasscodeEntryViewController : PRXCardContentViewController {

	PRXPasscodeEntryView* _passcodeEntryView;
	long long _numberOfDigits;
	/*^block*/id _textChangeHandler;
	/*^block*/id _textEntryCompletionHandler;

}

@property (nonatomic,readonly) PRXPasscodeEntryView * passcodeEntryView;              //@synthesize passcodeEntryView=_passcodeEntryView - In the implementation block
@property (assign,nonatomic) long long numberOfDigits;                                //@synthesize numberOfDigits=_numberOfDigits - In the implementation block
@property (nonatomic,copy) id textChangeHandler;                                      //@synthesize textChangeHandler=_textChangeHandler - In the implementation block
@property (nonatomic,copy) id textEntryCompletionHandler;                             //@synthesize textEntryCompletionHandler=_textEntryCompletionHandler - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)numberOfDigits;
-(void)viewDidLoad;
-(void)_textDidChange:(id)arg1 ;
-(id)textChangeHandler;
-(void)setTextChangeHandler:(id)arg1 ;
-(void)_updatePasscodeEntryView;
-(void)didCompleteTextEntry:(id)arg1 ;
-(void)setNumberOfDigits:(long long)arg1 ;
-(PRXPasscodeEntryView *)passcodeEntryView;
-(id)textEntryCompletionHandler;
-(void)setTextEntryCompletionHandler:(id)arg1 ;
@end

