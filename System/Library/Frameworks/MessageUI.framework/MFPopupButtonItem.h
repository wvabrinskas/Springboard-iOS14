/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MFPopupButtonItem : NSObject {

	NSString* _title;
	long long _style;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long style;               //@synthesize style=_style - In the implementation block
+(id)itemWithTitle:(id)arg1 style:(long long)arg2 ;
+(id)itemWithTitle:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)style;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)copy;
@end
