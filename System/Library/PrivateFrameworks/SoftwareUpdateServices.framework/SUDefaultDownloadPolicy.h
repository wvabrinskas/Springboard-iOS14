/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SUDownloadPolicy.h>

@class SUDescriptor, SUCarrierDownloadPolicyProperties, SUNetworkMonitor, NSString;

@interface SUDefaultDownloadPolicy : NSObject <SUDownloadPolicy> {

	SUDescriptor* _descriptor;
	SUCarrierDownloadPolicyProperties* _carrierPolicy;
	SUNetworkMonitor* _networkMonitor;
	BOOL _cellularCapable;
	int _cellularFeeAgreementStatus;

}

@property (nonatomic,retain) SUCarrierDownloadPolicyProperties * carrierPolicy;              //@synthesize carrierPolicy=_carrierPolicy - In the implementation block
@property (assign,getter=isCellularCapable,nonatomic) BOOL cellularCapable;                  //@synthesize cellularCapable=_cellularCapable - In the implementation block
@property (nonatomic,retain) SUNetworkMonitor * networkMonitor;                              //@synthesize networkMonitor=_networkMonitor - In the implementation block
@property (nonatomic,retain) SUDescriptor * descriptor;                                      //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic) int cellularFeeAgreementStatus;                                 //@synthesize cellularFeeAgreementStatus=_cellularFeeAgreementStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDescriptor:(SUDescriptor *)arg1 ;
-(id)initWithDescriptor:(id)arg1 ;
-(SUDescriptor *)descriptor;
-(void)setNetworkMonitor:(SUNetworkMonitor *)arg1 ;
-(NSString *)description;
-(BOOL)isDownloadable;
-(SUNetworkMonitor *)networkMonitor;
-(void)dealloc;
-(void)setCellularFeeAgreementStatus:(int)arg1 ;
-(int)cellularFeeAgreementStatus;
-(BOOL)isDownloadAllowableForCellular;
-(BOOL)isDownloadFreeForCellular;
-(BOOL)allowExpensiveNetwork;
-(BOOL)isDownloadAllowableForCellularRoaming;
-(BOOL)isDownloadAllowableForWiFi;
-(BOOL)isPowerRequired;
-(BOOL)hasEnoughDiskSpace;
-(BOOL)isDownloadAllowableForCellular2G;
-(BOOL)isSamePolicy:(id)arg1 ;
-(id)_stringForBool:(BOOL)arg1 ;
-(BOOL)_isCellularCapable;
-(BOOL)isDownloadAllowableForCellularIncludingInexpensiveHDM:(BOOL)arg1 ;
-(BOOL)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(BOOL*)arg2 powerRequired:(BOOL*)arg3 ;
-(BOOL)_isDownloadableForNetworkType:(int)arg1 error:(long long*)arg2 cellularFeesApply:(BOOL*)arg3 powerRequired:(BOOL*)arg4 ;
-(BOOL)cellularDownloadFeesApply;
-(BOOL)_inexpensiveHDM;
-(unsigned long long)wifiOnlyPeriodInDays;
-(BOOL)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(BOOL*)arg2 ;
-(SUCarrierDownloadPolicyProperties *)carrierPolicy;
-(void)setCarrierPolicy:(SUCarrierDownloadPolicyProperties *)arg1 ;
-(BOOL)isCellularCapable;
-(void)setCellularCapable:(BOOL)arg1 ;
@end
