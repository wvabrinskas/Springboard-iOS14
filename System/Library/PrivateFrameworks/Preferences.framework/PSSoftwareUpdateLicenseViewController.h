/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSViewController.h>

@class NSString, UITextView;

@interface PSSoftwareUpdateLicenseViewController : PSViewController {

	NSString* _licenseTextInfo;
	UITextView* _licenseTextView;

}

@property (nonatomic,retain) NSString * licenseTextInfo;                //@synthesize licenseTextInfo=_licenseTextInfo - In the implementation block
@property (nonatomic,retain) UITextView * licenseTextView;              //@synthesize licenseTextView=_licenseTextView - In the implementation block
-(void)viewWillLayoutSubviews;
-(void)didReceiveMemoryWarning;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)initWithLicense:(id)arg1 ;
-(void)setLicenseText:(id)arg1 ;
-(NSString *)licenseTextInfo;
-(void)setLicenseTextInfo:(NSString *)arg1 ;
-(UITextView *)licenseTextView;
-(void)setLicenseTextView:(UITextView *)arg1 ;
@end
