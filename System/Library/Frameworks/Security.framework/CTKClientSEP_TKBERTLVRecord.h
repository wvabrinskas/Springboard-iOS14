/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Security.framework/Security
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Security/CTKClientSEP_TKTLVRecord.h>

@interface CTKClientSEP_TKBERTLVRecord : CTKClientSEP_TKTLVRecord
+(unsigned long long)encodeNumber:(unsigned long long)arg1 into:(char*)arg2 ;
+(id)dataForTag:(unsigned long long)arg1 ;
+(id)zuluDateFormatter;
+(id)parseFromDataSource:(id)arg1 ;
-(id)initWithTag:(unsigned long long)arg1 value:(id)arg2 ;
-(id)propertyList;
-(id)initWithTag:(unsigned long long)arg1 records:(id)arg2 ;
-(id)initWithPropertyList:(id)arg1 ;
@end
