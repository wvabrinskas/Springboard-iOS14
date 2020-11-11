/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUViewController.h>

@class UIImage, NSBundle, NSString;

@interface SULockoutViewController : SUViewController {

	UIImage* _image;
	NSBundle* _localizationBundle;
	NSString* _messageBody;
	NSString* _messageTitle;

}

@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * messageBody;                     //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,retain) NSString * messageTitle;                    //@synthesize messageTitle=_messageTitle - In the implementation block
@property (nonatomic,retain) NSBundle * localizationBundle;              //@synthesize localizationBundle=_localizationBundle - In the implementation block
-(id)init;
-(void)setImage:(UIImage *)arg1 ;
-(void)setMessageBody:(NSString *)arg1 ;
-(UIImage *)image;
-(NSString *)messageBody;
-(void)loadView;
-(void)setMessageTitle:(NSString *)arg1 ;
-(NSString *)messageTitle;
-(void)dealloc;
-(id)copyArchivableContext;
-(NSBundle *)localizationBundle;
-(void)setLocalizationBundle:(NSBundle *)arg1 ;
@end
