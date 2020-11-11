/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMSharedUI/IMSharedUI-Structs.h>
#import <IMSharedUI/IMChatTranscriptItemLayoutAttributes.h>

@interface IMChatTranscriptItemExtendedLayoutAttributes : IMChatTranscriptItemLayoutAttributes {

	long long _layoutOrientation;
	double _topMargin;
	CGSize _drawableSize;

}

@property (assign,nonatomic) long long layoutOrientation;              //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (assign,nonatomic) CGSize drawableSize;                      //@synthesize drawableSize=_drawableSize - In the implementation block
@property (assign,nonatomic) double topMargin;                         //@synthesize topMargin=_topMargin - In the implementation block
-(long long)layoutOrientation;
-(void)setLayoutOrientation:(long long)arg1 ;
-(void)setDrawableSize:(CGSize)arg1 ;
-(CGSize)drawableSize;
-(double)topMargin;
-(void)setTopMargin:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
