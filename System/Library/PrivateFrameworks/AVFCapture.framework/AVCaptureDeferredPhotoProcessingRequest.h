/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVCaptureDeferredPhotoProxy, NSMutableArray, NSArray;

@interface AVCaptureDeferredPhotoProcessingRequest : NSObject {

	AVCaptureDeferredPhotoProxy* _photoProxy;
	unsigned _firedCallbackFlags;
	NSMutableArray* _delegatesStorage;

}

@property (readonly) NSArray * delegatesStorage;                            //@synthesize delegatesStorage=_delegatesStorage - In the implementation block
@property (readonly) AVCaptureDeferredPhotoProxy * photoProxy;              //@synthesize photoProxy=_photoProxy - In the implementation block
@property (assign,nonatomic) unsigned firedCallbackFlags;                   //@synthesize firedCallbackFlags=_firedCallbackFlags - In the implementation block
-(void)addDelegate:(id)arg1 ;
-(unsigned)firedCallbackFlags;
-(void)setFiredCallbackFlags:(unsigned)arg1 ;
-(NSArray *)delegatesStorage;
-(id)initWithDelegate:(id)arg1 photoProxy:(id)arg2 ;
-(AVCaptureDeferredPhotoProxy *)photoProxy;
-(void)dealloc;
@end
