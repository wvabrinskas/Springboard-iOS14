/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOXPCReply.h>
#import <libobjc.A.dylib/GEOXPCReply.h>

@class NSString;

@interface GEOImageServicePurgeCacheToSizeReply : GEOXPCReply <GEOXPCReply> {

	unsigned long long _amountDeleted;

}

@property (assign,nonatomic) unsigned long long amountDeleted;              //@synthesize amountDeleted=_amountDeleted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)encodeToXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)amountDeleted;
-(void)setAmountDeleted:(unsigned long long)arg1 ;
-(BOOL)isValid;
@end
