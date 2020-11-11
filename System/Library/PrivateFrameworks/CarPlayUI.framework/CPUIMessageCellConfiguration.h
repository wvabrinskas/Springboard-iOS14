/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CPUIMessageCellConfigurationProtocol.h>

@class NSString, UIImage;

@interface CPUIMessageCellConfiguration : NSObject <CPUIMessageCellConfigurationProtocol> {

	BOOL _unread;
	BOOL _showsPin;
	BOOL _showsStar;
	BOOL _showsMute;
	NSString* _text;
	NSString* _detailText;
	UIImage* _trailingImage;
	UIImage* _image;
	NSString* _trailingText;

}

@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * detailText;                      //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) UIImage * trailingImage;                  //@synthesize trailingImage=_trailingImage - In the implementation block
@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
@property (assign,getter=isUnread,nonatomic) BOOL unread;              //@synthesize unread=_unread - In the implementation block
@property (nonatomic,copy) NSString * trailingText;                    //@synthesize trailingText=_trailingText - In the implementation block
@property (assign,nonatomic) BOOL showsPin;                            //@synthesize showsPin=_showsPin - In the implementation block
@property (assign,nonatomic) BOOL showsStar;                           //@synthesize showsStar=_showsStar - In the implementation block
@property (assign,nonatomic) BOOL showsMute;                           //@synthesize showsMute=_showsMute - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 unread:(BOOL)arg4 showsPin:(BOOL)arg5 showsStar:(BOOL)arg6 showsMute:(BOOL)arg7 trailingText:(id)arg8 trailingImage:(id)arg9 ;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isUnread;
-(NSString *)text;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)trailingText;
-(UIImage *)image;
-(UIImage *)trailingImage;
-(void)setUnread:(BOOL)arg1 ;
-(void)setTrailingImage:(UIImage *)arg1 ;
-(NSString *)detailText;
-(void)setTrailingText:(NSString *)arg1 ;
-(void)setDetailText:(NSString *)arg1 ;
-(void)setShowsPin:(BOOL)arg1 ;
-(void)setShowsStar:(BOOL)arg1 ;
-(void)setShowsMute:(BOOL)arg1 ;
-(BOOL)showsPin;
-(BOOL)showsStar;
-(BOOL)showsMute;
@end
