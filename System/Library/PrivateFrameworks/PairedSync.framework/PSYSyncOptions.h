/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PSYTestInput, NSUUID;

@interface PSYSyncOptions : NSObject <NSSecureCoding> {

	BOOL _dryRun;
	BOOL _terminateDuringDryRun;
	PSYTestInput* _testInput;
	NSUUID* _pairingIdentifier;
	NSUUID* _sessionIdentifier;
	unsigned long long _syncSessionType;

}

@property (assign,nonatomic) BOOL dryRun;                                     //@synthesize dryRun=_dryRun - In the implementation block
@property (assign,nonatomic) BOOL terminateDuringDryRun;                      //@synthesize terminateDuringDryRun=_terminateDuringDryRun - In the implementation block
@property (nonatomic,retain) PSYTestInput * testInput;                        //@synthesize testInput=_testInput - In the implementation block
@property (nonatomic,retain) NSUUID * pairingIdentifier;                      //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * sessionIdentifier;                      //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long syncSessionType;              //@synthesize syncSessionType=_syncSessionType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPairingIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)pairingIdentifier;
-(void)setDryRun:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)sessionIdentifier;
-(void)setSessionIdentifier:(NSUUID *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)dryRun;
-(unsigned long long)syncSessionType;
-(void)setSyncSessionType:(unsigned long long)arg1 ;
-(PSYTestInput *)testInput;
-(BOOL)terminateDuringDryRun;
-(void)setTerminateDuringDryRun:(BOOL)arg1 ;
-(void)setTestInput:(PSYTestInput *)arg1 ;
@end
