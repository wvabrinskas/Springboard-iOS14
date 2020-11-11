/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFCacheable.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSString;

@interface EMMailboxScope : NSObject <EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding> {

	unsigned long long _hash;
	BOOL _excludeTypes;
	BOOL _excludeMailboxes;
	NSSet* _mailboxTypes;
	NSSet* _mailboxObjectIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * mailboxTypes;                         //@synthesize mailboxTypes=_mailboxTypes - In the implementation block
@property (nonatomic,readonly) BOOL excludeTypes;                                 //@synthesize excludeTypes=_excludeTypes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * mailboxObjectIDs;                     //@synthesize mailboxObjectIDs=_mailboxObjectIDs - In the implementation block
@property (nonatomic,readonly) BOOL excludeMailboxes;                             //@synthesize excludeMailboxes=_excludeMailboxes - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(id)mailboxScopeForMailboxTypes:(id)arg1 forExclusion:(BOOL)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)mailboxScopeForMailboxType:(long long)arg1 forExclusion:(BOOL)arg2 ;
+(id)mailboxScopeForMailboxObjectIDs:(id)arg1 forExclusion:(BOOL)arg2 ;
+(id)noMailboxesScope;
+(id)allMailboxesScope;
-(BOOL)scopeContainsMailbox:(id)arg1 ;
-(BOOL)excludeMailboxes;
-(id)_mailboxObjectIDsForTypesWithMailboxTypeResolver:(id)arg1 ;
-(id)_mailboxObjectIDsDescriptionIsDebug:(BOOL)arg1 ;
-(id)cachedSelf;
-(id)_mailboxTypesDescription;
-(BOOL)excludeTypes;
-(NSSet *)mailboxTypes;
-(BOOL)_scopeContainsMailboxWithObjectID:(id)arg1 mailboxTypeBlock:(/*^block*/id)arg2 ;
-(NSString *)ef_publicDescription;
-(id)allMailboxObjectIDsWithMailboxTypeResolver:(id)arg1 forExclusion:(BOOL*)arg2 ;
-(id)initWithMailboxTypes:(id)arg1 excludeTypes:(BOOL)arg2 mailboxObjectIDs:(id)arg3 excludeMailboxes:(BOOL)arg4 cached:(BOOL)arg5 ;
-(id)initWithMailboxTypes:(id)arg1 excludeTypes:(BOOL)arg2 mailboxObjectIDs:(id)arg3 excludeMailboxes:(BOOL)arg4 ;
-(id)mailboxScopeByAddingMailboxes:(id)arg1 ;
-(NSSet *)mailboxObjectIDs;
-(id)init;
-(id)mailboxScopeByRemovingMailboxes:(id)arg1 ;
-(BOOL)scopeContainsMailboxObjectID:(id)arg1 mailboxTypeResolver:(id)arg2 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)_calculateHash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
