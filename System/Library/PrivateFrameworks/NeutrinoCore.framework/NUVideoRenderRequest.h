/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@protocol NUScalePolicy;
@class NUColorSpace;

@interface NUVideoRenderRequest : NURenderRequest {

	NUColorSpace* _colorSpace;
	id<NUScalePolicy> _scalePolicy;

}

@property (nonatomic,retain) NUColorSpace * colorSpace;              //@synthesize colorSpace=_colorSpace - In the implementation block
@property (retain) id<NUScalePolicy> scalePolicy;                    //@synthesize scalePolicy=_scalePolicy - In the implementation block
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(NUColorSpace *)colorSpace;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(id<NUScalePolicy>)scalePolicy;
@end
