/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIButton.h>

@class NSString;

@interface AVTToolbarButton : UIButton {

	BOOL _isDefault;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL isDefault;                     //@synthesize isDefault=_isDefault - In the implementation block
-(id)initWithTitle:(id)arg1 isDefault:(BOOL)arg2 ;
-(BOOL)isDefault;
-(NSString *)title;
@end

