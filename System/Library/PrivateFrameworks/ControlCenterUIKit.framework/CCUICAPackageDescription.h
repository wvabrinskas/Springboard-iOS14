/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL;

@interface CCUICAPackageDescription : NSObject {

	BOOL _flipsForRightToLeftLayoutDirection;
	NSURL* _packageURL;

}

@property (nonatomic,copy,readonly) NSURL * packageURL;                            //@synthesize packageURL=_packageURL - In the implementation block
@property (assign,nonatomic) BOOL flipsForRightToLeftLayoutDirection;              //@synthesize flipsForRightToLeftLayoutDirection=_flipsForRightToLeftLayoutDirection - In the implementation block
+(id)descriptionForPackageNamed:(id)arg1 inBundle:(id)arg2 ;
-(void)setFlipsForRightToLeftLayoutDirection:(BOOL)arg1 ;
-(id)initWithPackageName:(id)arg1 inBundle:(id)arg2 ;
-(NSURL *)packageURL;
-(BOOL)flipsForRightToLeftLayoutDirection;
@end

