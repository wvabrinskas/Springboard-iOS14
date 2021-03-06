/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SceneKit/SceneKit-Structs.h>
@class AVAudioNode, AVAudioPlayerNode, SCNAudioSource;

@interface SCNAudioPlayer : NSObject {

	AVAudioNode* _audioNode;
	AVAudioPlayerNode* _audioPlayer;
	SCNAudioSource* _audioSource;
	C3DNodeRef _nodeRef;
	C3DSceneRef _scene;
	BOOL _customAudioNode;
	BOOL _completed;
	BOOL _shouldRecycle;
	/*^block*/id willStartPlayback;
	/*^block*/id didFinishPlayback;

}

@property (readonly) C3DSceneRef scene;                                   //@synthesize scene=_scene - In the implementation block
@property (readonly) BOOL customAudioNode;                                //@synthesize customAudioNode=_customAudioNode - In the implementation block
@property (assign) BOOL completed;                                        //@synthesize completed=_completed - In the implementation block
@property (readonly) AVAudioPlayerNode * audioPlayer;                     //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (nonatomic,copy) id willStartPlayback; 
@property (nonatomic,copy) id didFinishPlayback; 
@property (nonatomic,readonly) AVAudioNode * audioNode;                   //@synthesize audioNode=_audioNode - In the implementation block
@property (nonatomic,readonly) SCNAudioSource * audioSource;              //@synthesize audioSource=_audioSource - In the implementation block
+(id)audioPlayerWithAVAudioNode:(id)arg1 ;
+(id)audioPlayerWithSource:(id)arg1 ;
-(void)play;
-(id)initWithSource:(id)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(void)reset;
-(BOOL)completed;
-(void)recycle;
-(SCNAudioSource *)audioSource;
-(C3DNodeRef)nodeRef;
-(AVAudioPlayerNode *)audioPlayer;
-(C3DSceneRef)scene;
-(void)dealloc;
-(id)initWithAVAudioNode:(id)arg1 ;
-(void)setWillStartPlayback:(id)arg1 ;
-(void)setDidFinishPlayback:(id)arg1 ;
-(id)didFinishPlayback;
-(id)willStartPlayback;
-(id)audioBufferFormat;
-(void)setNodeRef:(C3DNodeRef)arg1 ;
-(const void*)__CFObject;
-(AVAudioNode *)audioNode;
-(BOOL)customAudioNode;
@end

