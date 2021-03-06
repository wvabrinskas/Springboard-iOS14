/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCRawImage : NSObject {

	CGImageRef _imageRef;
	char* _data;
	long long _width;
	long long _height;
	long long _bytesPerPixel;

}

@property (assign,nonatomic) char* data;                           //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) long long width;                      //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) long long height;                     //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) long long bytesPerPixel;              //@synthesize bytesPerPixel=_bytesPerPixel - In the implementation block
@property (nonatomic,retain) CGImageRef imageRef;                  //@synthesize imageRef=_imageRef - In the implementation block
+(id)rawImageForImage:(CGImageRef)arg1 ;
-(long long)height;
-(void)setWidth:(long long)arg1 ;
-(void)setData:(char*)arg1 ;
-(long long)width;
-(void)setHeight:(long long)arg1 ;
-(void)setImageRef:(CGImageRef)arg1 ;
-(CGImageRef)imageRef;
-(long long)bytesPerPixel;
-(char*)data;
-(void)dealloc;
-(void)setBytesPerPixel:(long long)arg1 ;
@end

