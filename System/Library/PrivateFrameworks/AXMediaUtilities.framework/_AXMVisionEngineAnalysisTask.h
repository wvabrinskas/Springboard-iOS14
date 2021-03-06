/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMTask.h>

@class NSUUID, AXMVisionPipelineContext, AXMSourceNode;

@interface _AXMVisionEngineAnalysisTask : AXMTask {

	NSUUID* _identifier;
	AXMVisionPipelineContext* _context;
	AXMSourceNode* _source;

}

@property (nonatomic,retain) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) AXMVisionPipelineContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AXMSourceNode * source;                          //@synthesize source=_source - In the implementation block
+(id)itemWithSource:(id)arg1 context:(id)arg2 ;
-(void)setSource:(AXMSourceNode *)arg1 ;
-(NSUUID *)identifier;
-(AXMVisionPipelineContext *)context;
-(AXMSourceNode *)source;
-(id)initWithSource:(id)arg1 context:(id)arg2 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setContext:(AXMVisionPipelineContext *)arg1 ;
@end

