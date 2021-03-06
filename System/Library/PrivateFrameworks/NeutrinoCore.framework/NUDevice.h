/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NUDevice.h>
@class NSString;


@protocol NUDevice <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) unsigned long long family; 
@property (nonatomic,readonly) BOOL hasMetalSupport; 
@property (nonatomic,readonly) BOOL hasOpenGLSupport; 
@property (nonatomic,readonly) long long openGLVirtualScreen; 
@property (nonatomic,readonly) long long defaultSampleMode; 
@required
-(NSString *)model;
-(unsigned long long)family;
-(NSString *)name;
-(id)renderer:(out id*)arg1;
-(id)lowPriorityRenderer:(out id*)arg1;
-(id)rendererWithoutIntermediateCaching:(out id*)arg1;
-(id)lowPriorityRendererWithoutIntermediateCaching:(out id*)arg1;
-(BOOL)hasMetalSupport;
-(BOOL)hasOpenGLSupport;
-(long long)openGLVirtualScreen;
-(long long)defaultSampleMode;

@end


@protocol OS_dispatch_queue, MTLDevice;
@class NSString, NURenderer, NSObject;

@interface NUDevice : NSObject <NUDevice> {

	NURenderer* _renderer;
	NURenderer* _lowPriorityRenderer;
	NURenderer* _noIntermediatesRenderer;
	NURenderer* _lowPriorityNoIntermediatesRenderer;
	NSObject*<OS_dispatch_queue> _queue;
	long long _defaultSampleMode;
	NSString* _name;
	NSString* _model;
	id<MTLDevice> _metalDevice;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * model;                                //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL hasMetalSupport; 
@property (nonatomic,readonly) BOOL hasOpenGLSupport; 
@property (nonatomic,readonly) long long openGLVirtualScreen; 
@property (nonatomic,readonly) id<NURenderer> renderer;                         //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) id<NURenderer> lowPriorityRenderer;              //@synthesize lowPriorityRenderer=_lowPriorityRenderer - In the implementation block
@property (nonatomic,readonly) id<MTLDevice> metalDevice;                       //@synthesize metalDevice=_metalDevice - In the implementation block
@property (nonatomic,readonly) BOOL shouldRenderUsingMetal; 
@property (nonatomic,readonly) BOOL shouldRenderUsingOpenGL; 
@property (nonatomic,readonly) unsigned long long family; 
@property (nonatomic,readonly) long long defaultSampleMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearCaches;
-(NSString *)model;
-(id)init;
-(id<NURenderer>)renderer;
-(unsigned long long)family;
-(NSString *)name;
-(id<MTLDevice>)metalDevice;
-(NSString *)description;
-(id)renderer:(out id*)arg1 ;
-(id)lowPriorityRenderer:(out id*)arg1 ;
-(id)rendererWithoutIntermediateCaching:(out id*)arg1 ;
-(id)lowPriorityRendererWithoutIntermediateCaching:(out id*)arg1 ;
-(BOOL)hasMetalSupport;
-(BOOL)hasOpenGLSupport;
-(long long)openGLVirtualScreen;
-(long long)defaultSampleMode;
-(long long)_defaultSampleMode;
-(id)initWithName:(id)arg1 model:(id)arg2 metalDevice:(id)arg3 ;
-(long long)_openGLVirtualScreen;
-(long long)_computeDefaultSampleMode;
-(long long)_preferredSampleMode;
-(BOOL)shouldRenderUsingMetal;
-(BOOL)shouldRenderUsingOpenGL;
-(BOOL)shouldLogRendererUsed;
-(id)_renderer:(out id*)arg1 ;
-(id)_newRenderer:(out id*)arg1 ;
-(id)_lowPriorityRenderer:(out id*)arg1 ;
-(id)_newLowPriorityRenderer:(out id*)arg1 ;
-(id)_rendererWithoutIntermediateCaching:(out id*)arg1 ;
-(id)_newNoIntermediatesRenderer:(out id*)arg1 ;
-(id)_lowPriorityRendererWithoutIntermediateCaching:(out id*)arg1 ;
-(id)_newLowPriorityNoIntermediatesRenderer:(out id*)arg1 ;
-(id<NURenderer>)lowPriorityRenderer;
@end

