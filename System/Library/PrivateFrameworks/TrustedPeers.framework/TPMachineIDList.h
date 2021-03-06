/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface TPMachineIDList : NSObject {

	NSArray* _entries;

}

@property (readonly) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
-(NSArray *)entries;
-(id)initWithEntries:(id)arg1 ;
-(id)description;
-(id)entryFor:(id)arg1 ;
-(id)machineIDsInStatus:(unsigned long long)arg1 ;
@end

