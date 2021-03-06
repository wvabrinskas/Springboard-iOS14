/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVVideoCompositionLayerInstruction.h>

@class AVMutableVideoCompositionLayerInstructionInternal;

@interface AVMutableVideoCompositionLayerInstruction : AVVideoCompositionLayerInstruction {

	AVMutableVideoCompositionLayerInstructionInternal* _mutableLayerInstruction;

}

@property (assign,nonatomic) int trackID; 
+(id)videoCompositionLayerInstruction;
+(id)videoCompositionLayerInstructionWithAssetTrack:(id)arg1 ;
-(int)trackID;
-(void)setTrackID:(int)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)setOpacity:(float)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)setCropRectangle:(CGRect)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)setTransformRampFromStartTransform:(CGAffineTransform)arg1 toEndTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(void)setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(void)setCropRectangleRampFromStartCropRectangle:(CGRect)arg1 toEndCropRectangle:(CGRect)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
@end

