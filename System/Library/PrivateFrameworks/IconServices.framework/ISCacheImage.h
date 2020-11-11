/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISConcreteImage.h>

@class NSUUID, NSData;

@interface ISCacheImage : ISConcreteImage {

	NSUUID* _uuid;
	NSData* _validationToken;

}

@property (retain) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (assign) BOOL placeholder; 
@property (readonly) NSData * validationToken;              //@synthesize validationToken=_validationToken - In the implementation block
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setPlaceholder:(BOOL)arg1 ;
-(NSUUID *)uuid;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
-(NSData *)validationToken;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)placeholder;
@end
