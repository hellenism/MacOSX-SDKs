/*	NSGarbageCollector.h
	Copyright (c) 2006-2013, Apple Inc. All rights reserved.
*/

#import <Foundation/NSObject.h>

NS_CLASS_AVAILABLE(10_5, NA)
NS_AUTOMATED_REFCOUNT_UNAVAILABLE
@interface NSGarbageCollector : NSObject

+ (id)defaultCollector;

- (BOOL)isCollecting NS_DEPRECATED(10_0, 10_6, NA, NA);

- (void)disable;
- (void)enable;
- (BOOL)isEnabled;

- (void)collectIfNeeded;
- (void)collectExhaustively;

- (void)disableCollectorForPointer:(const void *)ptr;
- (void)enableCollectorForPointer:(const void *)ptr;

- (NSZone *)zone;

@end

