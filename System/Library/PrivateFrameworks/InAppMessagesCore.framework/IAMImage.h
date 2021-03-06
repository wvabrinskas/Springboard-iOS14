/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <InAppMessagesCore/InAppMessagesCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface IAMImage : NSObject <NSCopying> {

	unsigned _width;
	unsigned _height;
	NSString* _identifier;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) unsigned width;                          //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned height;                         //@synthesize height=_height - In the implementation block
-(unsigned)height;
-(unsigned)width;
-(NSURL *)url;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 url:(id)arg2 width:(unsigned)arg3 height:(unsigned)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithICImage:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 url:(id)arg2 ;
@end

