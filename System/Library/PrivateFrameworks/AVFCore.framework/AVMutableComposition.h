/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVComposition.h>

@class AVMutableCompositionInternal, NSArray;

@interface AVMutableComposition : AVComposition {

	AVMutableCompositionInternal* _mutablePriv;

}

@property (nonatomic,readonly) NSArray * tracks; 
@property (assign,nonatomic) CGSize naturalSize; 
+(id)composition;
+(id)compositionWithURLAssetInitializationOptions:(id)arg1 ;
-(NSArray *)tracks;
-(void)setMetadata:(id)arg1 ;
-(id)trackWithTrackID:(int)arg1 ;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)removeTrack:(id)arg1 ;
-(id)_initWithComposition:(id)arg1 ;
-(id)_newTrackForIndex:(long long)arg1 ;
-(void)_notifyTracksThatSegmentsWillChange:(id)arg1 ;
-(void)_notifyTracksThatSegmentsDidChange:(id)arg1 successfully:(BOOL)arg2 ;
-(BOOL)insertTimeRange:(SCD_Struct_AV7)arg1 ofAsset:(id)arg2 atTime:(SCD_Struct_AV6)arg3 error:(id*)arg4 ;
-(void)removeTimeRange:(SCD_Struct_AV7)arg1 ;
-(void)insertEmptyTimeRange:(SCD_Struct_AV7)arg1 ;
-(void)scaleTimeRange:(SCD_Struct_AV7)arg1 toDuration:(SCD_Struct_AV6)arg2 ;
-(id)addMutableTrackWithMediaType:(id)arg1 preferredTrackID:(int)arg2 ;
-(id)mutableTrackCompatibleWithTrack:(id)arg1 ;
-(CGSize)naturalSize;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

