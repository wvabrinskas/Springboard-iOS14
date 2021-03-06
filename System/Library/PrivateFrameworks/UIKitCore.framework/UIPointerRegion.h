/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObject;
@class UIView;

@interface UIPointerRegion : NSObject <NSCopying> {

	id<NSObject> _identifier;
	unsigned long long _generationID;
	UIView* _referenceView;
	CGRect _rect;

}

@property (assign,nonatomic) CGRect rect;                                  //@synthesize rect=_rect - In the implementation block
@property (nonatomic,retain) id<NSObject> identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long generationID;              //@synthesize generationID=_generationID - In the implementation block
@property (assign,nonatomic,__weak) UIView * referenceView;                //@synthesize referenceView=_referenceView - In the implementation block
+(id)regionWithRect:(CGRect)arg1 identifier:(id)arg2 ;
-(unsigned long long)generationID;
-(unsigned long long)hash;
-(CGRect)rect;
-(id<NSObject>)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGenerationID:(unsigned long long)arg1 ;
-(void)setRect:(CGRect)arg1 ;
-(void)setIdentifier:(id<NSObject>)arg1 ;
-(void)setReferenceView:(UIView *)arg1 ;
-(UIView *)referenceView;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

