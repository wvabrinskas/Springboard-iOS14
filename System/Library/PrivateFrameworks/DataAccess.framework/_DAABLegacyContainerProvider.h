/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataAccess/DAContainerProvider.h>

@interface _DAABLegacyContainerProvider : DAContainerProvider {

	void* _addressBook;

}

@property (nonatomic,readonly) void* addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
-(id)allContainers;
-(id)containerWithExternalIdentifier:(id)arg1 forAccountWithExternalIdentifier:(id)arg2 ;
-(id)createNewContainerWithType:(int)arg1 name:(id)arg2 externalIdentifier:(id)arg3 constraintsPath:(id)arg4 syncData:(id)arg5 contentReadonly:(BOOL)arg6 propertiesReadonly:(BOOL)arg7 forAccount:(id)arg8 ;
-(void)setDefaultContainer:(id)arg1 withLocalDBHelper:(id)arg2 onlyIfNotSet:(BOOL)arg3 ;
-(BOOL)setLastSyncDateForContainer:(id)arg1 ;
-(void)mergeAllRecordsIntoContainer:(id)arg1 shouldInsertChangeHistoryRecords:(BOOL)arg2 ;
-(id)initWithAddressBook:(void*)arg1 ;
-(id)allContainersForAccountWithExternalIdentifier:(id)arg1 ;
-(void*)addressBook;
-(void)dealloc;
@end

