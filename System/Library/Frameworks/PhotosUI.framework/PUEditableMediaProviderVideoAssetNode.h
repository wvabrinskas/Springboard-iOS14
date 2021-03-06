/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXRunNode.h>
#import <libobjc.A.dylib/PUVideoAssetNode.h>

@protocol PUEditableAsset;
@class AVAsset, PUEditableMediaProvider, NSArray, NSString;

@interface PUEditableMediaProviderVideoAssetNode : PXRunNode <PUVideoAssetNode> {

	int _requestID;
	AVAsset* _videoAsset;
	long long _version;
	id<PUEditableAsset> _asset;
	PUEditableMediaProvider* _mediaProvider;

}

@property (nonatomic,readonly) long long version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) id<PUEditableAsset> asset;                            //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PUEditableMediaProvider * mediaProvider;              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) AVAsset * videoAsset;                                 //@synthesize videoAsset=_videoAsset - In the implementation block
@property (readonly) unsigned long long state; 
@property (getter=isWaiting,readonly) BOOL waiting; 
@property (getter=isRunning,readonly) BOOL running; 
@property (getter=isComplete,readonly) BOOL complete; 
@property (getter=isCanceled,readonly) BOOL canceled; 
@property (assign,nonatomic,__weak) id<PXRunNodeDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * dependencies; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PUEditableAsset>)asset;
-(PUEditableMediaProvider *)mediaProvider;
-(void)run;
-(long long)version;
-(AVAsset *)videoAsset;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 version:(long long)arg3 ;
-(void)_handleDidLoadVideo:(id)arg1 info:(id)arg2 ;
@end

