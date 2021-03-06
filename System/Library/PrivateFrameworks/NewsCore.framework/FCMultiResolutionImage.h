/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface FCMultiResolutionImage : NSObject <NSCopying> {

	NSURL* _imageURL1x;
	NSURL* _imageURL2x;
	NSURL* _imageURL3x;

}

@property (nonatomic,retain) NSURL * imageURL1x;              //@synthesize imageURL1x=_imageURL1x - In the implementation block
@property (nonatomic,retain) NSURL * imageURL2x;              //@synthesize imageURL2x=_imageURL2x - In the implementation block
@property (nonatomic,retain) NSURL * imageURL3x;              //@synthesize imageURL3x=_imageURL3x - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(NSURL *)imageURL3x;
-(void)setImageURL3x:(NSURL *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)imageURL1x;
-(NSURL *)imageURL2x;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithImageURL1X:(id)arg1 imageURL2X:(id)arg2 imageURL3X:(id)arg3 ;
-(void)setImageURL1x:(NSURL *)arg1 ;
-(void)setImageURL2x:(NSURL *)arg1 ;
@end

