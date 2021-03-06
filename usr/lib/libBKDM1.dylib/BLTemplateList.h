/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libBKDM1.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSLock;

@interface BLTemplateList : NSObject {

	NSMutableDictionary* _identityList;
	NSMutableDictionary* _templateList;
	NSLock* _listLock;

}
-(void)removeIdentity:(id)arg1 ;
-(void)setIdentity:(id)arg1 ;
-(void)setIdentitiesForUser:(unsigned)arg1 withTemplateListName:(id)arg2 ;
-(id)initWithIdentities:(id)arg1 ;
-(void)setIdentities:(id)arg1 ;
-(id)templateNameForIdentity:(id)arg1 ;
-(unsigned long long)countForUser:(unsigned)arg1 ;
-(id)identityByUUID:(id)arg1 ;
-(id)identitiesForUser:(unsigned)arg1 ;
-(void)removeAll;
-(void)setIdentity:(id)arg1 withTemplateName:(id)arg2 ;
-(id)allIdentities;
@end

