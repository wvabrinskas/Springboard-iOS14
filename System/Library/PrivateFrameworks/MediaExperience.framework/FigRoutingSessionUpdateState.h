/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaExperience/MediaExperience-Structs.h>
@class ARPPredictionContext;

@interface FigRoutingSessionUpdateState : NSObject {

	OpaqueFigRoutingSessionRef _newSession;
	ARPPredictionContext* _predictionContext;

}

@property (nonatomic,retain) OpaqueFigRoutingSessionRef newSession;                 //@synthesize newSession=_newSession - In the implementation block
@property (nonatomic,retain) ARPPredictionContext * predictionContext;              //@synthesize predictionContext=_predictionContext - In the implementation block
-(id)initWithNewSession:(OpaqueFigRoutingSessionRef)arg1 ;
-(OpaqueFigRoutingSessionRef)newSession;
-(void)setNewSession:(OpaqueFigRoutingSessionRef)arg1 ;
-(ARPPredictionContext *)predictionContext;
-(void)setPredictionContext:(ARPPredictionContext *)arg1 ;
-(void)dealloc;
@end
