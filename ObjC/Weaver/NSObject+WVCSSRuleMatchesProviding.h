//
//  NSObject+WVCSSRuleMatchesProviding.h
//  Texture
//
//  Copyright (c) 2017-present, Pinterest, Inc.  All rights reserved.
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class PDCSSRuleMatch, PDCSSProperty;

@interface NSObject (PDCSSRuleMatchesProviding)

- (NSArray<PDCSSRuleMatch *> *)wv_generateCSSRuleMatchesWithObjectId:(NSNumber *)objectId;

- (nullable PDCSSRuleMatch *)wv_generateCSSRuleMatchWithName:(NSString *)ruleMatchName objectId:(NSNumber *)objectId;

- (void)wv_applyCSSProperty:(PDCSSProperty *)property withRuleMatchName:(NSString *)ruleMatchName;

@end

NS_ASSUME_NONNULL_END
