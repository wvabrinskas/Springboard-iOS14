/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface MTLBinaryArchiveDescriptor : NSObject <NSCopying> {

	NSURL* _url;
	unsigned long long _options;

}

@property (assign,nonatomic) unsigned long long options;                     //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long writingOptions; 
@property (nonatomic,copy) NSURL * url;                                      //@synthesize url=_url - In the implementation block
-(void)setOptions:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)writingOptions;
-(unsigned long long)hash;
-(void)setWritingOptions:(unsigned long long)arg1 ;
-(NSURL *)url;
-(unsigned long long)options;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

