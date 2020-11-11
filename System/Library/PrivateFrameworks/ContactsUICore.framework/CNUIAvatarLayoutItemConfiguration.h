/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ContactsUICore/ContactsUICore-Structs.h>
@interface CNUIAvatarLayoutItemConfiguration : NSObject {

	double _size;
	double _x;
	double _y;
	double _baseSize;

}

@property (assign,nonatomic) double size;                  //@synthesize size=_size - In the implementation block
@property (assign,x,nonatomic) double x;                   //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) double y;                   //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) double baseSize;              //@synthesize baseSize=_baseSize - In the implementation block
-(void)setY:(double)arg1 ;
-(void)setX:(double)arg1 ;
-(void)setSize:(double)arg1 ;
-(double)y;
-(double)x;
-(double)size;
-(double)baseSize;
-(void)updateLayer:(id)arg1 inBounds:(CGRect)arg2 atIndex:(long long)arg3 isRTL:(BOOL)arg4 ;
-(CGRect)itemFrameInContainingBounds:(CGRect)arg1 isRTL:(BOOL)arg2 ;
-(void)setBaseSize:(double)arg1 ;
-(id)initWithSize:(double)arg1 x:(double)arg2 y:(double)arg3 baseSize:(double)arg4 ;
@end
