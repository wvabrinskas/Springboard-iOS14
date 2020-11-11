/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface RadioArtwork : NSObject <NSCopying> {

	NSURL* _URL;
	CGSize _pixelSize;

}

@property (nonatomic,readonly) CGSize pixelSize;              //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,readonly) CGSize pointSize; 
@property (nonatomic,readonly) NSURL * URL;                   //@synthesize URL=_URL - In the implementation block
-(CGSize)pointSize;
-(unsigned long long)hash;
-(CGSize)pixelSize;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithArtworkDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(id)initWithArtworkURL:(id)arg1 pixelSize:(CGSize)arg2 ;
@end
