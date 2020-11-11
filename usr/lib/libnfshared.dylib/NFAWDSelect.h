/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libnfshared.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCSEAIDSelectEvent, NSData, NSString;

@interface NFAWDSelect : NSObject <NFAWDEventProtocol> {

	AWDNFCSEAIDSelectEvent* _metric;

}

@property (nonatomic,retain) NSData * aid; 
@property (nonatomic,retain) AWDNFCSEAIDSelectEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)aid;
-(id)init;
-(id)getMetric;
-(void)setMetric:(AWDNFCSEAIDSelectEvent *)arg1 ;
-(AWDNFCSEAIDSelectEvent *)metric;
-(void)setAid:(NSData *)arg1 ;
-(unsigned)getMetricId;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end
