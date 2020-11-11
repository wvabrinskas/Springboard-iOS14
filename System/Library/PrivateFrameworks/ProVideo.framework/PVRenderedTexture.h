/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@interface PVRenderedTexture : NSObject {

	HGRef<HGGLTexture>* _glTexture;

}

@property (nonatomic,readonly) unsigned textureName; 
@property (nonatomic,readonly) unsigned textureTarget; 
@property (nonatomic,readonly) CGRect textureRect; 
@property (nonatomic,readonly) CGRect bitmapRect; 
-(unsigned)textureName;
-(unsigned)textureTarget;
-(CGRect)textureRect;
-(CGSize)textureSize;
-(id)initWithHGGLTexture:(HGRef<HGGLTexture>*)arg1 ;
-(CGRect)bitmapRect;
@end
