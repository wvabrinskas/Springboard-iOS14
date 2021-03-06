/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivityRingsUI/ARUIRingsRenderPipelineFactory.h>

@class ARUIRingsEmptyState, ARUIRingsFillState, ARUIRingsEndCapShadowState, ARUIRingsAlphaReductionState;

@interface ARUIOverlappingRingsRenderPipelineFactory : ARUIRingsRenderPipelineFactory {

	ARUIRingsEmptyState* _emptyState;
	ARUIRingsFillState* _fillState;
	ARUIRingsEndCapShadowState* _endCapShadowState;
	ARUIRingsAlphaReductionState* _alphaReductionState;

}
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2 ;
-(id)pipelineForConfiguration:(id)arg1 ;
@end

