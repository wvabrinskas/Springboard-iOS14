/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppAttestInternal.framework/AppAttestInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppAttestInternal/CBORValue.h>

@class NSMapTable;

@interface CBORMap : CBORValue {

	NSMapTable* m_data;

}
-(id)init;
-(int)fieldType;
-(void)write:(id)arg1 ;
-(void)setKey:(id)arg1 value:(id)arg2 ;
-(id)getSortedKeys;
@end
