/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libnfshared.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCSECRSAuthorize, NSString;

@interface NFAWDCRSDeAuthorize : NSObject <NFAWDEventProtocol> {

	unsigned _status;
	AWDNFCSECRSAuthorize* _metric;

}

@property (assign,nonatomic) unsigned status;                            //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) AWDNFCSECRSAuthorize * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned)status;
-(id)getMetric;
-(void)setMetric:(AWDNFCSECRSAuthorize *)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(AWDNFCSECRSAuthorize *)metric;
-(unsigned)getMetricId;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

