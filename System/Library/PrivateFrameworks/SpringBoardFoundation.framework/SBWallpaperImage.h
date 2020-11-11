/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKitCore/UIImage.h>

@class NSURL;

@interface SBWallpaperImage : UIImage {

	NSURL* _wallpaperFileURL;

}

@property (nonatomic,copy,readonly) NSURL * wallpaperFileURL;              //@synthesize wallpaperFileURL=_wallpaperFileURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 wallpaperFileURL:(id)arg4 ;
-(NSURL *)wallpaperFileURL;
-(id)initWithFlatColor:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFlatColor:(id)arg1 ;
@end
